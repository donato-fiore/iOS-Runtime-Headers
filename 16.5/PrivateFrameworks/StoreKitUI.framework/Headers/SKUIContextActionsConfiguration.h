// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICONTEXTACTIONSCONFIGURATION_H
#define SKUICONTEXTACTIONSCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "SKUIDialogTemplateViewElement.h"
#import "SKUIContextActionsPresentationSource.h"

@interface SKUIContextActionsConfiguration : NSObject

@property (retain, nonatomic) SKUIDialogTemplateViewElement *dialogTemplate; // ivar: _dialogTemplate
@property (retain, nonatomic) SKUIContextActionsPresentationSource *presentationSource; // ivar: _presentationSource


-(id)_resourceImageForImageElement:(id)arg0 ;
-(id)contextActions;
-(id)initWithDialogTemplate:(id)arg0 ;


@end


#endif