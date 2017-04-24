//
//  SunInfoView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SunriseAndSunset.h"

@interface SunInfoView : UIView

/**
 *  日出的值
 */
@property (nonatomic, strong) SunriseAndSunset  *sunsireValue;

/**
 *  日落的值
 */
@property (nonatomic, strong) SunriseAndSunset  *sunsetValue;

/**
 *  创建出view
 */
- (void)buildView;

/**
 *  显示
 */
- (void)show;

/**
 *  隐藏
 */
- (void)hide;

@end
