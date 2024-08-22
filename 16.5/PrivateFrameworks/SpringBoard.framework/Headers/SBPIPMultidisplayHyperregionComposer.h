// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPMULTIDISPLAYHYPERREGIONCOMPOSER_H
#define SBPIPMULTIDISPLAYHYPERREGIONCOMPOSER_H

@class NSArray, NSString, NSMutableDictionary;
@protocol SBPIPPositionHyperregionComposing, SBPIPPositionHyperregionComposerDelegate;

#import <Foundation/Foundation.h>


@interface SBPIPMultidisplayHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing>



@property (copy, nonatomic) NSArray *connectedWindowScenes; // ivar: _connectedWindowScenes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPIPPositionHyperregionComposerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *sceneIdentifiersToComposers; // ivar: _sceneIdentifiersToComposers
@property (readonly) Class superclass;


-(NSUInteger)canonicalPositionForPoint:(struct CGPoint )arg0 proposedPosition:(NSUInteger)arg1 geometry:(struct SBPIPPositionGeometryContext )arg2 interaction:(struct SBPIPPositionInteractionStateContext )arg3 ;
-(id)_composerForWindowScene:(id)arg0 ;
-(id)_identifierForScene:(id)arg0 ;
-(id)init;
-(id)mergeMutableRegionsMap:(id)arg0 withMap:(id)arg1 ;
-(id)mutableRegionMapForScene:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(id)positionRegionsForRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(struct CGPoint )defaultCornerPositionForLayoutSettingsPosition:(NSUInteger)arg0 proposedCenter:(struct CGPoint )arg1 geometry:(struct SBPIPPositionGeometryContext )arg2 interaction:(struct SBPIPPositionInteractionStateContext )arg3 ;
-(struct SBPIPPositionGeometryContext )_adjustGeometryContextIfNeeded:(struct SBPIPPositionGeometryContext )arg0 forComposer:(id)arg1 ;
-(void)invalidate;


@end


#endif