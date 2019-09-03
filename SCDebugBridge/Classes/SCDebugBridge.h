//
//  SCDebugBridge.h
//  SCRNDemo
//
//  Created by aevit on 2017/9/25.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>

@interface SCDebugBridge : NSObject <RCTBridgeModule>

#ifdef DEBUG
/**
 get the debug ip and port
 
 @return eg: @{@"ip": @"127.0.0.1", @"port": @"8081"}
 */
+ (NSDictionary*)getIpAndPort;

/**
 set the bridge of RCTRootView
 */
+ (void)setRootBridge:(RCTBridge*)rootBridge;
#endif

@end
