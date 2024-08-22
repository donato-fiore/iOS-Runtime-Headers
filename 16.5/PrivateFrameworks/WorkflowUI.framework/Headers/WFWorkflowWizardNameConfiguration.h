// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWWIZARDNAMECONFIGURATION_H
#define WFWORKFLOWWIZARDNAMECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFWorkflowWizardNameConfiguration : NSObject

@property (copy, nonatomic) NSString *doneBarButtonTitle; // ivar: _doneBarButtonTitle
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (nonatomic) BOOL showsHeySiri; // ivar: _showsHeySiri
@property (nonatomic) BOOL showsSuggestions; // ivar: _showsSuggestions
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)addToSiriConfiguration;
+(id)newWorkflowConfiguration;
+(id)tellSiriInfoText;
-(id)init;


@end


#endif