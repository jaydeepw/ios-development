//
//  T4DToDoItem.h
//  ToDoList
//
//  Created by Jaydeep on 30/03/14.
//  Copyright (c) 2014 Jaydeep. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface T4DToDoItem : NSObject

    @property NSString *itemName;
    @property BOOL completed;
    @property (readonly) NSDate *creationDate;

@end
