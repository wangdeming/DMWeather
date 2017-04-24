//
//  TemperatureView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/18.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TemperatureView : UIView

/**
 *  温度
 */
@property (nonatomic) CGFloat temperature;

- (void)buildView;
- (void)show;
- (void)hide;

@end
