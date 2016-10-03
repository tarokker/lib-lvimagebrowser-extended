//
//  LVUtils
//  
//
//  Created by LawLincoln on 14-4-25.
//  Copyright (c) 2014年 SelfStudio. All rights reserved.
//

#import "UIView+LVUtils.h"

@implementation UIView (LVUtils)
- (void)LVRound{
    self.layer.cornerRadius = self.frame.size.width/2;
    self.clipsToBounds = YES;
}
- (void)round{
    [self LVRound];
}
@end
