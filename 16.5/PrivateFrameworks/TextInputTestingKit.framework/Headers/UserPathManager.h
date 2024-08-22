// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USERPATHMANAGER_H
#define USERPATHMANAGER_H

@class NSString, NSMutableDictionary;
@protocol TTKTestCaseSource;

#import <Foundation/Foundation.h>


@interface UserPathManager : NSObject {
    NSObject<TTKTestCaseSource> *_source;
    NSString *_pathFile;
    NSMutableDictionary *_transforms;
    NSMutableDictionary *_lookupTree;
    NSMutableDictionary *_translatedKBDLayouts;
    *void m_generator;
}




-(BOOL)buildLookupTree;
-(BOOL)computeTranslations:(id)arg0 ;
-(id)initWithPathFile:(id)arg0 ;
-(id)lookup:(id)arg0 keyboardController:(id)arg1 ;
-(id)translateLayoutForKeys:(id)arg0 keyboardController:(id)arg1 ;
-(void)dealloc;
-(void)setRandomNumberSeed:(unsigned int)arg0 ;


@end


#endif