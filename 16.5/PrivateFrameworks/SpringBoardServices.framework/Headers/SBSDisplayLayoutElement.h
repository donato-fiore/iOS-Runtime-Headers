// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSDISPLAYLAYOUTELEMENT_H
#define SBSDISPLAYLAYOUTELEMENT_H

@class FBSDisplayLayoutElement, NSString;
@protocol SBSDisplayLayoutElement;



@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutRole;
@property (nonatomic, getter=sb_isStashedPIP, setter=sb_setStashedPIP:) BOOL sb_stashedPIP;
@property (nonatomic, getter=sb_isTransitioning, setter=sb_setTransitioning:) BOOL sb_transitioning;
@property (readonly, nonatomic, getter=isSpringBoardElement) BOOL springBoardElement;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 layoutRole:(NSInteger)arg1 ;
-(id)succinctDescriptionBuilder;


@end


#endif