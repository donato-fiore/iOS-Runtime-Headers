// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVTEMPLATEFEATURESMANAGER_H
#define TVTEMPLATEFEATURESMANAGER_H

@class NSMutableDictionary;
@protocol TVTemplateFeaturesManagerDelegate;

#import <Foundation/Foundation.h>


@interface TVTemplateFeaturesManager : NSObject {
    NSMutableDictionary *_contextsByFeature;
}


@property (weak, nonatomic) NSObject<TVTemplateFeaturesManagerDelegate> *delegate; // ivar: _delegate


+(id)featuresManagerForAppDocument:(id)arg0 ;
-(NSInteger)_rankForContext:(id)arg0 ;
-(id)_contextsForFeature:(id)arg0 ;
-(id)currentContextForFeature:(id)arg0 ;
-(void)popContext:(id)arg0 forFeature:(id)arg1 ;
-(void)pushContext:(id)arg0 forFeature:(id)arg1 ;


@end


#endif