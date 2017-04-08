//
//  OXPFIFOOperation.h
//  OXPFIFOQueue
//
//  Created by oxape on 2017/4/8.
//  Copyright © 2017年 oxape. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OXPFIFOOperation : NSOperation

+ (instancetype)blockOperationWithBlock:(void (^)())block afterDelay:(CFTimeInterval)delay inQueue:(dispatch_queue_t)queue;

- (instancetype)initWithBlock:(void (^)())block afterDelay:(CFTimeInterval)delay inQueue:(dispatch_queue_t)queue;

@end
