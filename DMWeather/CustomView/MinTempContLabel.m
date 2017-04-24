//
//  MinTempContLabel.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/20.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "MinTempContLabel.h"

@interface MinTempContLabel ()<NumberCountDelegate>

@end

@implementation MinTempContLabel


- (instancetype)initWithFrame:(CGRect)frame {
    
    self = [super initWithFrame:frame];
    
    if (self) {
        
        self.countLabel               = [[UILabel alloc] initWithFrame:self.bounds];
        self.countLabel.textAlignment = NSTextAlignmentLeft;
        [self addSubview:self.countLabel];
        self.countLabel.alpha         = 0;
        
        self.minTempCount          = [MinTempCount new];
        self.minTempCount.delegate = self;
    }
    
    return self;
}

- (void)numberCount:(NumberCount *)numberCount currentSting:(NSAttributedString *)string {
    
    self.countLabel.attributedText = string;
}

- (void)showDuration:(CGFloat)duration {
    
    self.minTempCount.fromValue = self.fromValue;
    self.minTempCount.toValue   = self.toValue;
    self.minTempCount.duration  = duration;
    
    [self.minTempCount startAnimation];
    
    [UIView animateWithDuration:duration animations:^{
        
        self.countLabel.alpha     = 1.f;
    }];
}

- (void)hideDuration:(CGFloat)duration {
    
    self.minTempCount.fromValue = self.toValue;
    self.minTempCount.toValue   = 0;
    self.minTempCount.duration  = duration;
    
    [self.minTempCount startAnimation];
    
    [UIView animateWithDuration:duration animations:^{
        
        self.countLabel.alpha     = 0.f;
    }];
}

@end
