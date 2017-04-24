//
//  ForecastWeatherView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LineBackgroundView.h"

@interface ForecastWeatherView : UIView

/**
 *  城市编号码
 */
@property (nonatomic, strong) NSString *countryCode;

/**
 *  城市名字
 */
@property (nonatomic, strong) NSString *cityName;

/**
 *  创建出view
 */
- (void)buildView;

- (void)show;
- (void)hide;

@end
