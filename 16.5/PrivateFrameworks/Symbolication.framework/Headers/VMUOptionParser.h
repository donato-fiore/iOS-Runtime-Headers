// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUOPTIONPARSER_H
#define VMUOPTIONPARSER_H

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

#import <Foundation/Foundation.h>


@interface VMUOptionParser : NSObject {
    NSMutableArray *_optionDescriptions;
    NSMutableArray *_appleInternalOptionDescriptions;
    NSMutableDictionary *_optionBlockByString;
    *__CFArray _longOptStructs;
    NSMutableString *_shortOpts;
    NSUInteger _spacing;
}


@property (nonatomic) BOOL abortOnError; // ivar: _abortOnError
@property (copy, nonatomic) NSString *discussion; // ivar: _discussionDescription
@property (readonly) int optind;
@property (nonatomic) BOOL parametersShowAsAssignment; // ivar: _parametersShowAsAssignment
@property (copy, nonatomic) NSString *purposeDescription; // ivar: _purposeDescription
@property (nonatomic) BOOL singleHyphenLongNames; // ivar: _singleHyphenLongNames
@property (copy, nonatomic) NSString *syntaxDescription; // ivar: _syntaxDescription


-(id)init;
-(id)parseArguments:(*char *)arg0 withBlock:(id)arg1 ;
-(id)parseArgumentsArray:(id)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)printOptionDescriptions:(id)arg0 ;
-(void)registerOptionWithLongName:(id)arg0 shortName:(id)arg1 argumentKind:(int)arg2 argumentName:(id)arg3 optionDescription:(id)arg4 flags:(NSUInteger)arg5 handler:(id)arg6 ;
-(void)registerOptionWithLongName:(id)arg0 shortName:(id)arg1 argumentKind:(int)arg2 argumentName:(id)arg3 optionDescription:(id)arg4 handler:(id)arg5 ;
-(void)usage:(id)arg0 ;
-(void)usage:(id)arg0 shouldExit:(BOOL)arg1 ;


@end


#endif