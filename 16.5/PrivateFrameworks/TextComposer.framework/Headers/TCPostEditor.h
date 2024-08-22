// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCPOSTEDITOR_H
#define TCPOSTEDITOR_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TCTagger.h"
#import "TCSentenceCache.h"
#import "TCXPCClient.h"

@interface TCPostEditor : NSObject {
    NSDictionary *_options;
    NSMutableDictionary *_editors;
    TCTagger *_tagger;
    TCSentenceCache *_sentenceCache;
    TCXPCClient *_xpcClient;
}




+(BOOL)checkingEnabledForLanguage:(id)arg0 ;
+(BOOL)deviceHasSuitableANE;
+(id)enabledLanguages;
+(id)sharedEditor;
+(void)logIgnoredSentence:(id)arg0 taggerFlags:(NSUInteger)arg1 ;
-(BOOL)controlRepeatedAutocorrectionsWithOptions:(id)arg0 ;
-(BOOL)requireANE;
-(BOOL)requiredANENotPresent;
-(BOOL)suppressTelemetryWithOptions:(id)arg0 ;
-(BOOL)useAutocorrectionWithOptions:(id)arg0 ;
-(BOOL)useCacheWithOptions:(id)arg0 ;
-(BOOL)useServer;
-(id)allEditorTypes;
-(id)combinedResultsForResults:(id)arg0 useAutocorrection:(BOOL)arg1 ;
-(id)defaultEditorTypesForAppKit;
-(id)defaultLocalEditorTypes;
-(id)defaultRemoteEditorTypes;
-(id)editorOfType:(id)arg0 ;
-(id)enabledLanguageForLanguage:(id)arg0 ;
-(id)grammarDetailForRange:(struct _NSRange )arg0 inString:(id)arg1 sentenceRange:(struct _NSRange )arg2 tagger:(id)arg3 ;
-(id)grammarDetailForString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 ;
-(id)initWithChecker:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)localAndCachedResultsFromCheckingString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 ;
-(id)localResultsFromCheckingString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 ;
-(id)resultByCombiningCorrectionResultsInRange:(struct _NSRange )arg0 fromResults:(id)arg1 alreadyAddedResults:(id)arg2 ;
-(id)resultByCombiningGrammarResultsInRange:(struct _NSRange )arg0 fromResults:(id)arg1 ;
-(id)resultsFromCheckingString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 options:(id)arg3 ;
-(id)reversionForString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 ;
-(id)taggerWithString:(id)arg0 language:(id)arg1 ;
-(id)xpcClient;
-(void)checkString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 mutableResults:(id)arg5 ;
-(void)clearTagger;
-(void)controlRepeatedAutocorrectionResultsForString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 offset:(NSUInteger)arg3 mutableResults:(id)arg4 ;
-(void)dealloc;
-(void)localRecordResponse:(NSInteger)arg0 toGrammarDetail:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 ;
-(void)recordResponse:(NSInteger)arg0 toGrammarDetail:(id)arg1 language:(id)arg2 ;
-(void)recordResponse:(NSInteger)arg0 toResult:(id)arg1 language:(id)arg2 ;
-(void)remoteCheckString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 mutableResults:(id)arg5 completionHandler:(id)arg6 ;
-(void)requestCheckingOfString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)requestCheckingOfString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 optionsData:(id)arg3 completionHandler:(id)arg4 ;
-(void)requestCheckingOfString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 completionHandler:(id)arg5 ;
-(void)requestCheckingOfString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)resetCache;
-(void)resetEditors;
-(void)resetRepeatedAutocorrectionCache;
-(void)retrieveCachedResultsForString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 offset:(NSUInteger)arg3 mutableResults:(id)arg4 remainingRange:(struct _NSRange *)arg5 ;
-(void)storeCachedResults:(id)arg0 forString:(id)arg1 range:(struct _NSRange )arg2 language:(id)arg3 offset:(NSUInteger)arg4 ;
-(void)warmEditorsInBackground:(BOOL)arg0 ;


@end


#endif