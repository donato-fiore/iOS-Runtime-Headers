// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITENVIRONMENTINSTANCE_H
#define EQKITENVIRONMENTINSTANCE_H

@class NSDictionary;


#import "EQKitEnvironment.h"

@interface EQKitEnvironmentInstance : EQKitEnvironment {
    NSDictionary *mConfig;
    *void mOperatorDictionary;
    *Manager mFontManager;
    *void mKerningManager;
    *Config mLayoutConfig;
    *void mBlahtexConfig;
}


@property (nonatomic) BOOL kerning;


+(id)dataForDefaultEnvironment;
+(id)dataForEnvironment:(id)arg0 ;
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg0 ;
-(*void)blahtexConfig;
-(*void)operatorDictionary;
-(id)initWithConfig:(id)arg0 ;
-(id)newDictionaryForArchiving;
-(struct Config *)layoutConfig;
-(struct Manager *)fontManager;
-(void)beginLayout;
-(void)dealloc;
-(void)endLayout;
-(void)reloadFonts;


@end


#endif