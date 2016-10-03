//
//  Header.h
//  w.io
//
//  Created by LawLincoln on 14-3-31.
//  Copyright (c) 2014年 SelfStudio. All rights reserved.
//

#ifndef LV_ShortCut_h
#define LV_ShortCut_h

#if LVLOGS
#define LVLOG(...) NSLog(__VA_ARGS__)
#else
#define LVLOG(...)
#endif


#define LVRM(X,Y,W,H) CGRectMake(X,Y,W,H)
#define LVPM(X,Y) CGPointMake(X, Y)
#define LVSM(W,H) CGSizeMake(W,H)


#define LVWinSize [UIScreen mainScreen].bounds.size

#define LVNC  [NSNotificationCenter defaultCenter]
#define LVUSRD [NSUserDefaults standardUserDefaults]

#define degreesToRadian(x) (M_PI * (x) / 180.0)

#define OSVersion [[[UIDevice currentDevice] systemVersion] floatValue]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define GlobalDefaultQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)
#define GlobalHighQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0)
#define GlobalBackGroundQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0)
#define GlobalLowQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0)
#define MainQueue dispatch_get_main_queue()

#define isDict(obj) [obj isKindOfClass:[NSDictionary class]]
#define isString(obj) [obj isKindOfClass:[NSString class]]
#define isArray(obj) [obj isKindOfClass:[NSArray class]]
#define isNumber(obj) [obj isKindOfClass:[NSNumber class]]

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)

#endif
