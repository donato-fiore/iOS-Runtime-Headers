// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIWORKFLOWRUNNERCLIENTOPTIONS_H
#define WFSIRIWORKFLOWRUNNERCLIENTOPTIONS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSiriWorkflowRunnerClientOptions : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs; // ivar: _airPlayRouteIDs
@property (nonatomic) NSInteger currentDeviceIdiom; // ivar: _currentDeviceIdiom
@property (readonly, nonatomic) NSInteger executionContext; // ivar: _executionContext
@property (readonly, nonatomic) BOOL isOwnedByCurrentUser; // ivar: _isOwnedByCurrentUser
@property (readonly, copy, nonatomic) NSString *originatingDeviceIDSIdentifier; // ivar: _originatingDeviceIDSIdentifier
@property (readonly, copy, nonatomic) NSString *originatingDeviceRapportEffectiveIdentifier; // ivar: _originatingDeviceRapportEffectiveIdentifier
@property (readonly, copy, nonatomic) NSString *originatingDeviceRapportMediaSystemIdentifier; // ivar: _originatingDeviceRapportMediaSystemIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithAirPlayRouteIDs:(id)arg0 executionContext:(NSInteger)arg1 originatingDeviceIDSIdentifier:(id)arg2 originatingDeviceRapportEffectiveIdentifier:(id)arg3 originatingDeviceRapportMediaSystemIdentifier:(id)arg4 isOwnedByCurrentUser:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif