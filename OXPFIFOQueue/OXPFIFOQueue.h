//
//  OXPFIFOQueue.h
//  OXPFIFOQueue
//
//  Created by oxape on 2017/4/8.
//  Copyright © 2017年 oxape. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for OXPFIFOQueue.
FOUNDATION_EXPORT double OXPFIFOQueueVersionNumber;

//! Project version string for OXPFIFOQueue.
FOUNDATION_EXPORT const unsigned char OXPFIFOQueueVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <OXPFIFOQueue/PublicHeader.h>

@interface OXPFIFOQueue : NSOperationQueue

+ (instancetype)defaultQueue;
- (void)executeBlock:(void (^)())block;
- (void)executeBlock:(void (^)())block afterDelay:(CFTimeInterval)delay;
- (void)executeBlock:(void (^)())block afterDelay:(CFTimeInterval)delay inQueue:(dispatch_queue_t)queue;

@end
