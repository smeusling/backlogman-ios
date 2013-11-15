//
//  BKGProject.h
//  Backlogman
//
//  Created by Vincent Fournié on 14.11.13.
//  Copyright (c) 2013 VFE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BKGObject.h"

@interface BKGProject : BKGObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *description;
@property (nonatomic, copy, readonly) NSString *code;

@end
