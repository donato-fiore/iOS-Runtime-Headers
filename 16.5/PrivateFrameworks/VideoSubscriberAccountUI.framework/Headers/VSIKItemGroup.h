// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIKITEMGROUP_H
#define VSIKITEMGROUP_H

@class IKAppContext, NSString;
@protocol VSJSItemGroupBridge, IKDOMFeature, VSIKItemGroupDelegate;

#import <Foundation/Foundation.h>


@interface VSIKItemGroup : NSObject <VSJSItemGroupBridge, IKDOMFeature>



@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSIKItemGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setJSSelectedItem:) NSInteger jsSelectedItem; // ivar: _jsSelectedItem
@property (nonatomic) NSInteger selectedItemIndex; // ivar: _selectedItemIndex
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
+(void)registerFeature;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;


@end


#endif