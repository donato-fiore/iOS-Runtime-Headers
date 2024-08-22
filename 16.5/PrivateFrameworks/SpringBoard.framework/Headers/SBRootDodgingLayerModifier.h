// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROOTDODGINGLAYERMODIFIER_H
#define SBROOTDODGINGLAYERMODIFIER_H



#import "SBDodgingModifier.h"

@interface SBRootDodgingLayerModifier : SBDodgingModifier

@property (nonatomic) BOOL hasPerformedInitialSetup; // ivar: _hasPerformedInitialSetup


-(id)_floorModifier;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handlePreferenceChangeEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleRotationEvent:(id)arg0 ;
-(void)_setup;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif