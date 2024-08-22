// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIANIMATORDOMFEATURE_H
#define SKUIANIMATORDOMFEATURE_H

@class IKAppContext, NSString;
@protocol SKUIDOMFeature, SKUIAnimatorDOMFeatureDelegate;

#import <Foundation/Foundation.h>


@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature>



@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIAnimatorDOMFeatureDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;


@end


#endif