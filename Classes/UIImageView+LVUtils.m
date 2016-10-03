//
//  LVUtils
//  
//
//  Created by LawLincoln on 14-4-25.
//  Copyright (c) 2014年 SelfStudio. All rights reserved.
//

#import "UIImageView+LVUtils.h"
#import <objc/runtime.h>
static void *userInfo;

@implementation UIImageView (LVUtils)
- (void)setUserInfo:(NSDictionary *)dict{
    [self LVSetUserInfo:dict];
}
- (NSDictionary *)userInfo {
    return  [self LVUserInfo];
}

- (void)enableTapForDelegate:(id)delegete withSelector:(SEL)sel{
    [self LVEnableTapForDelegate:delegete withSelector:sel];
    
}
- (void)LVSetUserInfo:(NSDictionary *)dict{
    objc_setAssociatedObject(self, &userInfo, dict, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSDictionary *)LVUserInfo {
    NSDictionary *result = objc_getAssociatedObject(self, &userInfo);
    if (result == nil) {
        result = @{};
        objc_setAssociatedObject(self, &userInfo, result, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return result;
}

- (void)LVEnableTapForDelegate:(id)delegete withSelector:(SEL)sel{
    [self setUserInteractionEnabled:YES];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]initWithTarget:delegete action:sel];
    tap.numberOfTapsRequired = 1;
    tap.numberOfTouchesRequired = 1;
    [self addGestureRecognizer:tap];
    
}
@end
