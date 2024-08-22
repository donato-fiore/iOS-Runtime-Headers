// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSIENTACTIVEINTERFACEORIENTATIONREQUESTER_H
#define SBTRANSIENTACTIVEINTERFACEORIENTATIONREQUESTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBTransientActiveInterfaceOrientationRequester : NSObject

@property (readonly, nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithOrientation:(NSInteger)arg0 andReason:(id)arg1 ;


@end


#endif