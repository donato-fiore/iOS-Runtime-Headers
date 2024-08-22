// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRECORDINGINDICATORSYSTEMAPERTUREELEMENT_H
#define SBRECORDINGINDICATORSYSTEMAPERTUREELEMENT_H

@class NSString, UIView;
@protocol SAIndicatorBehavior, SAUIIndicatorElementViewProviding, SBSystemApertureSuppressible, SBSystemApertureElementVisibilityObserving, SAElement, SAElementHosting;

#import <Foundation/Foundation.h>

#import "SBRecordingIndicatorManager.h"

@interface SBRecordingIndicatorSystemApertureElement : NSObject <SAIndicatorBehavior, SAUIIndicatorElementViewProviding, SBSystemApertureSuppressible, SBSystemApertureElementVisibilityObserving, SAElement>



@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *indicatorView; // ivar: _indicatorView
@property (weak, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager; // ivar: _recordingIndicatorManager
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed; // ivar: _suppressed


-(BOOL)hasIndicatorBehavior;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(BOOL)shouldSuppressElementWhileOtherElementsPresent;
-(id)initWithRecordingIndicatorView:(id)arg0 recordingIndicatorManager:(id)arg1 ;
-(id)viewProvider;
-(void)element:(id)arg0 visibilityWillChange:(BOOL)arg1 ;


@end


#endif