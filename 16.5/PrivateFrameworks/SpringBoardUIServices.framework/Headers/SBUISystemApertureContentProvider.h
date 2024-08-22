// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURECONTENTPROVIDER_H
#define SBUISYSTEMAPERTURECONTENTPROVIDER_H

@class NSString;
@protocol SBUISystemApertureContentProviding, SBUISystemApertureContentViewProviding;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureContentProvider : NSObject <SBUISystemApertureContentProviding>



@property (retain, nonatomic) NSObject<SBUISystemApertureContentViewProviding> *actionContentViewProvider; // ivar: _actionContentViewProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBUISystemApertureContentViewProviding> *leadingContentViewProvider; // ivar: _leadingContentViewProvider
@property (retain, nonatomic) NSObject<SBUISystemApertureContentViewProviding> *minimalContentViewProvider; // ivar: _minimalContentViewProvider
@property (retain, nonatomic) NSObject<SBUISystemApertureContentViewProviding> *primaryContentViewProvider; // ivar: _primaryContentViewProvider
@property (retain, nonatomic) NSObject<SBUISystemApertureContentViewProviding> *secondaryContentViewProvider; // ivar: _secondaryContentViewProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SBUISystemApertureContentViewProviding> *trailingContentViewProvider; // ivar: _trailingContentViewProvider




@end


#endif