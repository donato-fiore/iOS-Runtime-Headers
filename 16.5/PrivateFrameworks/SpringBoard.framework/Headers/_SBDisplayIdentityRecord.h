// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDISPLAYIDENTITYRECORD_H
#define _SBDISPLAYIDENTITYRECORD_H

@class BSAtomicSignal, NSString, FBSDisplayIdentity;
@protocol BSInvalidatable, BSDescriptionStreamable;

#import <Foundation/Foundation.h>


@interface _SBDisplayIdentityRecord : NSObject <BSInvalidatable, BSDescriptionStreamable>

 {
    BSAtomicSignal *_invalidationSignal;
}


@property (readonly, nonatomic, getter=didConnectAtInit) BOOL connectedAtInit; // ivar: _connectedAtInit
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithIdentity:(id)arg0 connectedAtInit:(BOOL)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif