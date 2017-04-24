//
//  TemperatureCountLabel.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/18.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "TemperatureCountLabel.h"

@interface TemperatureCountLabel ()<NumberCountDelegate>

@end

@implementation TemperatureCountLabel

- (instancetype)initWithFrame:(CGRect)frame {
    
    self = [super initWithFrame:frame];
    
    if (self) {
        
        self.countLabel               = [[UILabel alloc] initWithFrame:self.bounds];
        self.countLabel.textAlignment = NSTextAlignmentCenter;
        [self addSubview:self.countLabel];
        self.countLabel.alpha         = 0;
        self.countLabel.numberOfLines = 0;
        
        self.temperatureCount          = [TemperatureCount new];
        self.temperatureCount.delegate = self;
    }
    
    return self;
}

- (void)numberCount:(NumberCount *)numberCount currentSting:(NSAttributedString *)string {
    
    self.countLabel.attributedText = string;
}

- (void)showDuration:(CGFloat)duration {
    
    self.temperatureCount.fromValue = self.fromValue;
    self.temperatureCount.toValue   = self.toValue;
    self.temperatureCount.duration  = duration;
    
    [self.temperatureCount startAnimation];
    
    [UIView animateWithDuration:duration animations:^{
        
        self.countLabel.alpha     = 1.f;
    }];
}

- (void)hideDuration:(CGFloat)duration {
    
    [UIView animateWithDuration:duration animations:^{
        
        self.countLabel.alpha     = 0.f;
    }];
}

@end
