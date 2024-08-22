// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOCORRECTIONTESTERAPPDELEGATE_H
#define AUTOCORRECTIONTESTERAPPDELEGATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AutocorrectionTesterAppDelegate : NSObject {
    NSMutableDictionary *_options;
}




+(id)reporterWithOptions:(id)arg0 ;
+(void)setupSingletonMocksWithOptions:(id)arg0 ;
+(void)teardownSingletonMocks;
-(BOOL)runAndWriteReport;
-(BOOL)runAutocorrectionTester:(id)arg0 ;
-(BOOL)runTestCasesForSource:(id)arg0 errorMessage:(id)arg1 reportObserver:(id)arg2 ;
-(BOOL)runTests:(id)arg0 withHarnessClass:(Class)arg1 forLanguage:(id)arg2 errorMessage:(id)arg3 reportObserver:(id)arg4 ;
-(BOOL)runWithObserver:(id)arg0 ;
-(CGFloat)runDslTest:(id)arg0 withHarnessClass:(Class)arg1 forLanguage:(id)arg2 errorMessage:(id)arg3 ;
-(id)initWithLocale:(id)arg0 andText:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(void)resetOptions:(id)arg0 ;


@end


#endif