// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCVEGAJSDOCUMENT_H
#define TCVEGAJSDOCUMENT_H

@protocol TCVegaJSDocumentInterface;

#import <Foundation/Foundation.h>

#import "TCVegaHTMLElement.h"
#import "TCVegaCGCanvas.h"

@interface TCVegaJSDocument : NSObject <TCVegaJSDocumentInterface>



@property (retain, nonatomic) TCVegaHTMLElement *body; // ivar: body
@property (retain) TCVegaCGCanvas *canvas; // ivar: canvas


-(id)createElementWithString:(id)arg0 ;
-(id)initWithCanvas:(id)arg0 ;


@end


#endif