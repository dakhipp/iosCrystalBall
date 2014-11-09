//
//  CrystalBall.m
//  Crystal Ball
//
//  Created by dakota hipp on 5/24/14.
//  Copyright (c) 2014 dakota hipp. All rights reserved.
//

#import "CrystalBall.h"

@implementation CrystalBall

- (NSArray*) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects: @"It is certain",
                        @"It is decidedly so",
                        @"All signs say YES",
                        @"The stars are not alligned",
                        @"My reply is no",
                        @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again",
                        @"Unable to answer now", nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
    
}

@end
