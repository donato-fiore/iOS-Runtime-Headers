// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALEFFECTCONTENTVIEW_H
#define _UIVISUALEFFECTCONTENTVIEW_H

@class UIVisualEffectSubview;



@interface _UIVisualEffectContentView : UIVisualEffectSubview {
    BOOL _disableGroupFiltering;
    BOOL _currentlyDisplayingRequestedEffects;
}




-(BOOL)disableGroupFiltering;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyIdentityFilterEffects;
-(void)applyRequestedFilterEffects;
-(void)didAddSubview:(id)arg0 ;
-(void)setDisableGroupFiltering:(BOOL)arg0 ;
-(void)setFilters:(id)arg0 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif