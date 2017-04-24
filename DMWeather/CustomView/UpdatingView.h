//
//  UpdatingView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/17.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnowView.h"
#import "UIView+GlowView.h"
#import "UIView+SetRect.h"
#import "CALayer+MaskLayer.h"

@interface UpdatingView : UIView

- (void)insertIntoView:(UIView *)view;

- (void)show;
- (void)hide;
- (void)showFailed;

@end
