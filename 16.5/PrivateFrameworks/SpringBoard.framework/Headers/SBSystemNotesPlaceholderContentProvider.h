// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMNOTESPLACEHOLDERCONTENTPROVIDER_H
#define SBSYSTEMNOTESPLACEHOLDERCONTENTPROVIDER_H

@class NSString, UIImage;
@protocol SBScenePlaceholderContentViewProvider, SBScenePlaceholderContentViewProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemNotesPlaceholderContentProvider : NSObject <SBScenePlaceholderContentViewProvider>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBScenePlaceholderContentViewProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;


-(id)initWithSnapshot:(id)arg0 ;
-(id)sceneView:(id)arg0 requestsPlaceholderContentViewWithContext:(id)arg1 ;


@end


#endif