//
//  CrystalBall.h
//  Crystal Ball
//
//  Created by dakota hipp on 5/24/14.
//  Copyright (c) 2014 dakota hipp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end
