// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDISPLAYASSERTIONSTACK_H
#define _SBDISPLAYASSERTIONSTACK_H

@class FBSDisplayIdentity, NSMapTable, NSString;
@protocol SBDisplayAssertionProviding, _SBDisplayAssertionStackDelegate;

#import <Foundation/Foundation.h>


@interface _SBDisplayAssertionStack : NSObject <SBDisplayAssertionProviding>

 {
    FBSDisplayIdentity *_rootIdentity;
    id<_SBDisplayAssertionStackDelegate> *_delegate;
    BOOL _invalidated;
    BOOL _activated;
    NSMapTable *_assertionControlPreferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)acquireAssertionForDisplay:(id)arg0 level:(NSUInteger)arg1 deactivationReasons:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)initWithRootDisplay:(id)arg0 delegate:(id)arg1 ;
-(void)_assertion:(id)arg0 updatedPreferences:(id)arg1 ;
-(void)_assertionDidInvalidate:(id)arg0 ;
-(void)_evalAndApplyOldPreferences:(id)arg0 newPreferences:(id)arg1 ;
-(void)activateAssertionsForDisplay:(id)arg0 ;
-(void)dealloc;
-(void)invalidateAssertionForDerivedDisplayDisconnect:(id)arg0 ;
-(void)invalidateForDisplayDisconnect;


@end


#endif