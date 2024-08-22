// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKACCESSCONTROLLERREADTICKET_H
#define TSKACCESSCONTROLLERREADTICKET_H

@class NSString;
@protocol TSKAccessControllerReadTicket;

#import <Foundation/Foundation.h>

#import "TSKAccessController.h"

@interface TSKAccessControllerReadTicket : NSObject <TSKAccessControllerReadTicket>

 {
    TSKAccessController *_accessController;
    uint8_t _accessCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccessController:(id)arg0 ;
-(void)beginExtendingLifetime;
-(void)dealloc;
-(void)endExtendingLifetime;


@end


#endif