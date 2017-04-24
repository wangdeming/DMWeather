//
//  WeatherTitleView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeatherTitleView : UIView

/**
 *  城市名字
 */
@property (nonatomic, strong) NSString *cityName;

/**
 *  天气描述信息
 */
@property (nonatomic, strong) NSString *weatherDescription;

/**
 *  天气更新时间
 */
@property (nonatomic, strong) NSString *weatherUpdateTime;

/**
 *  创建出view
 */
- (void)buildView;

/**
 *  显示出view
 */
- (void)show;

/**
 *  隐藏view
 */
- (void)hide;

/**
 *  处理偏移量数据
 *
 *  @param offsetValue 偏移量
 */
- (void)accessOffsetValue:(CGFloat)offsetValue;

@end
