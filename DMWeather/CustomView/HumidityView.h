//
//  HumidityView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/18.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HumidityView : UIView

/**
 *  百分比
 */
@property (nonatomic) CGFloat percent;

- (void)buildView;
- (void)show;
- (void)hide;

@end
