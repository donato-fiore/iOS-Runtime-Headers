// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYINMEMORYSTRINGBASEDTREELOGGER_H
#define UIACCESSIBILITYINMEMORYSTRINGBASEDTREELOGGER_H

@class NSMutableString, NSMutableArray, NSString;
@protocol UIAccessibilityElementTraversalTreeLogger;

#import <Foundation/Foundation.h>


@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger>

 {
    NSMutableString *_stringRepresentation;
    NSMutableArray *_currentPrefix;
    NSString *_prefix;
    NSString *_descriptionKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithElementDescriptionKey:(id)arg0 ;
-(id)initWithPrefix:(id)arg0 ;
-(id)initWithPrefix:(id)arg0 elementDescriptionKey:(id)arg1 ;
-(id)stringRepresentation;
-(void)logElement:(id)arg0 ;
-(void)pop;
-(void)push;


@end


#endif