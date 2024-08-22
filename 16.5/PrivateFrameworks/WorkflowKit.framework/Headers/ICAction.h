// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACTION_H
#define ICACTION_H

@class NSArray, NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "ICApp.h"

@interface ICAction : NSObject

@property (readonly, nonatomic) ICApp *app; // ivar: _app
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL createsWFAction;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) NSDictionary *descriptionDictionary;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic, getter=isDiscoverable) BOOL discoverable;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *inputContentClasses; // ivar: _inputContentClasses
@property (readonly, nonatomic) NSArray *inputMapping; // ivar: _inputMapping
@property (readonly, nonatomic) NSString *inputParameterSourceKey;
@property (readonly, nonatomic) BOOL inputRequired;
@property (readonly, nonatomic) BOOL inputsMultipleItems;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL neverSuggested;
@property (readonly, nonatomic) NSArray *outputContentClasses; // ivar: _outputContentClasses
@property (readonly, nonatomic) NSArray *outputMapping; // ivar: _outputMapping
@property (readonly, nonatomic) BOOL outputsMultipleItems;
@property (readonly, nonatomic) id *parameterSummaryDefinition;
@property (readonly, nonatomic) NSArray *requiredResourceNames;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) BOOL skipItemClassesSupportingInput;
@property (readonly, nonatomic) NSString *subcategory;
@property (readonly, nonatomic) NSString *wfActionClassName;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDefinition:(id)arg0 app:(id)arg1 ;
// -(void)performActionWithInput:(id)arg0 parameters:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;
-(void)processInput:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif