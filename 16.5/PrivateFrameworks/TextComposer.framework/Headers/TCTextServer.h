// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCTEXTSERVER_H
#define TCTEXTSERVER_H

@protocol TCXPCTextServer;

#import <Foundation/Foundation.h>


@interface TCTextServer : NSObject <TCXPCTextServer>





+(id)validatedDetailDictionaryForDictionary:(id)arg0 ;
+(id)validatedOptionsDictionaryForDictionary:(id)arg0 ;
+(id)validatedOptionsDictionaryForOptionsData:(id)arg0 editorTypes:(id)arg1 ;
-(void)_checkString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)_xpc_dataFromCheckingGrammarInString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 optionsData:(id)arg3 completionHandler:(id)arg4 ;
-(void)_xpc_dataFromCheckingString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 optionsData:(id)arg3 completionHandler:(id)arg4 ;
-(void)_xpc_recordResponse:(NSUInteger)arg0 toGrammarDetailPropertyListData:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 ;
-(void)prewarmEditor;


@end


#endif