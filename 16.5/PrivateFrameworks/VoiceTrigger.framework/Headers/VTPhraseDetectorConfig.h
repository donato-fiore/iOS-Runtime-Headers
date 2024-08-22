// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTPHRASEDETECTORCONFIG_H
#define VTPHRASEDETECTORCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VTPhraseDetectorConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI; // ivar: _configPathNDAPI
@property (readonly, nonatomic) NSString *configPathRecognizer; // ivar: _configPathRecognizer
@property (readonly, nonatomic) NSArray *phraseConfigs; // ivar: _phraseConfigs
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath
@property (readonly, nonatomic) BOOL useKeywordSpotting; // ivar: _useKeywordSpotting
@property (readonly, nonatomic) BOOL useRecognizerCombination; // ivar: _useRecognizerCombination


-(id)initWithResourcePath:(id)arg0 configPathNDAPI:(id)arg1 useRecognizerCombination:(BOOL)arg2 configPathRecognizer:(id)arg3 useKeywordSpotting:(BOOL)arg4 phraseConfigs:(id)arg5 ;


@end


#endif