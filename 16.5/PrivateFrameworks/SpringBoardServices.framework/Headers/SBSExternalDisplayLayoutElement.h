// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSEXTERNALDISPLAYLAYOUTELEMENT_H
#define SBSEXTERNALDISPLAYLAYOUTELEMENT_H

@class FBSDisplayLayoutElement;



@interface SBSExternalDisplayLayoutElement : FBSDisplayLayoutElement



+(id)elementWithIdentifier:(id)arg0 presenting:(BOOL)arg1 ;
-(BOOL)sb_isExternalDisplayElement;
-(BOOL)sb_isPresenting;
-(id)succinctDescriptionBuilder;


@end


#endif