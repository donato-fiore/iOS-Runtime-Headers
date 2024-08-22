// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTPASTEITEM_H
#define UITEXTPASTEITEM_H

@class NSString, NSDictionary, NSItemProvider, NSArray;
@protocol UITextPasteItem;

#import <Foundation/Foundation.h>

#import "UITextPasteCoordinator.h"

@interface UITextPasteItem : NSObject <UITextPasteItem>



@property (readonly, nonatomic) UITextPasteCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *defaultAttributes; // ivar: _defaultAttributes
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *documentOptions; // ivar: _documentOptions
@property (nonatomic) BOOL forcesDefaultAttributes; // ivar: _forcesDefaultAttributes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) id *localObject; // ivar: _localObject
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedPasteConfigurationClasses; // ivar: _supportedPasteConfigurationClasses


-(id)initWithTextPasteCoordinator:(id)arg0 ;
-(void)setAttachmentResult:(id)arg0 ;
-(void)setAttributedStringResult:(id)arg0 ;
-(void)setDefaultResult;
-(void)setNoResult;
-(void)setStringResult:(id)arg0 ;


@end


#endif