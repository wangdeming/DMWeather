//
//  PathDirectionView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/20.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+SetRect.h"

@interface PathDirectionView : UIView

/**
 *  起始点在右边
 */
@property (nonatomic) BOOL  startPointAtRight;

/**
 *  根据百分比显示
 *
 *  @param percent 百分比
 */
- (void)showPercent:(CGFloat)percent;

@end
