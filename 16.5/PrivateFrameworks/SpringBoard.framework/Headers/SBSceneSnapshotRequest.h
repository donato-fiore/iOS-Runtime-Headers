// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENESNAPSHOTREQUEST_H
#define SBSCENESNAPSHOTREQUEST_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBSceneSnapshotRequest : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger userInterfaceStyle; // ivar: _userInterfaceStyle


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSize:(NSUInteger)arg0 orientation:(NSUInteger)arg1 userInterfaceStyle:(NSUInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif