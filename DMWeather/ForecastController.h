//
//  ForecastController.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CurrentConditions.h"

@interface ForecastController : UIViewController

/**
 *  天气预报
 */
@property (nonatomic, strong) CurrentConditions *weatherCondition;

@end
