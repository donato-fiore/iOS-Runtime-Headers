// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFTRAITSPREFERENCESTREENODE_H
#define SBFTRAITSPREFERENCESTREENODE_H

@class NSArray, NSString;
@protocol SBFTraitsPreferencesTreeNode, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFTraitsParticipant.h"

@interface SBFTraitsPreferencesTreeNode : NSObject <SBFTraitsPreferencesTreeNode, BSDescriptionProviding>



@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugLastOrientationSettingsValidationFailureReason;
@property (nonatomic) BOOL debugLastSettingsWereValidated;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat order; // ivar: _order
@property (weak, nonatomic) NSObject<SBFTraitsPreferencesTreeNode> *parent; // ivar: _parent
@property (readonly, copy, nonatomic) SBFTraitsParticipant *participant; // ivar: _participant
@property (readonly, copy, nonatomic) NSString *role; // ivar: _role
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 ;
-(id)settingsUpdater;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addChild:(id)arg0 ;


@end


#endif