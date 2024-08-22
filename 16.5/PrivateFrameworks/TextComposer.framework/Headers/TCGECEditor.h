// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCGECEDITOR_H
#define TCGECEDITOR_H

@class NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol TCPostEditing, TCGECModel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TCGECEditor : NSObject <TCPostEditing>

 {
    NSDictionary *_options;
    NSObject<TCGECModel> *_model;
    NSMutableDictionary *_cachedGrammarDetailsDictionary;
    NSMutableArray *_cachedSentenceArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUInteger _modelLoadingState;
}




-(id)OTABundlePath;
-(id)_loadModel;
-(id)backgroundLoadingQueue;
-(id)computedGrammarDetailsForSentence:(id)arg0 locale:(id)arg1 options:(id)arg2 ;
-(id)grammarDetailsForSentence:(id)arg0 locale:(id)arg1 options:(id)arg2 ;
-(id)initWithOptions:(id)arg0 ;
-(id)modelUsingBackgroundLoading:(BOOL)arg0 ;
-(void)checkSentence:(id)arg0 locale:(id)arg1 offset:(NSUInteger)arg2 options:(id)arg3 mutableResults:(id)arg4 ;
-(void)checkString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 mutableResults:(id)arg5 ;
-(void)loadModelsInBackground:(BOOL)arg0 ;
-(void)resetModels;


@end


#endif