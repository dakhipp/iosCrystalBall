//
//  ViewController.h
//  Crystal Ball
//
//  Created by dakota hipp on 5/22/14.
//  Copyright (c) 2014 dakota hipp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CrystalBall;

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CrystalBall *crystalBall;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;


- (void) makePrediction;

@end
