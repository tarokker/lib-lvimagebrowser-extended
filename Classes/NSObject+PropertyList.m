//
//  NSObject+PropertyList.m
//  w.io
//
//  Created by LawLincoln on 14-4-11.
//  Copyright (c) 2014年 SelfStudio. All rights reserved.
//

#import "NSObject+PropertyList.h"
#import <objc/runtime.h>
@implementation NSObject (PropertyList)


- (NSArray *)LVAllPropertyNames
{
    unsigned count;
    objc_property_t *properties = class_copyPropertyList([self class], &count);
    
    NSMutableArray *rv = [NSMutableArray array];
    
    unsigned i;
    for (i = 0; i < count; i++)
    {
        objc_property_t property = properties[i];
        NSString *name = [NSString stringWithUTF8String:property_getName(property)];
        [rv addObject:name];
    }
    
    free(properties);
    
    return rv;
}

- (void)LVLogSelf{
    NSArray *ars = [self LVAllPropertyNames];
    for (NSString *key in ars) {
        id value = [self valueForKey:key];
        NSLog(@"%@:%@",key,value);
    }
}
@end
