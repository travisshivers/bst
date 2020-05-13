/* Copyright © 2020 Arista Networks, Inc. All rights reserved.
 *
 * Use of this source code is governed by the MIT license that can be found
 * in the LICENSE file.
 */

#ifndef USERNS_H
# define USERNS_H

# include <unistd.h>

struct userns_helper {
	pid_t pid;
	int in;
	int out;
};

struct userns_helper userns_helper_spawn(void);
void userns_helper_sendpid(const struct userns_helper *helper, pid_t pid);
void userns_helper_wait(const struct userns_helper *helper);
void userns_helper_close(struct userns_helper *helper);

#endif /* !USERNS_H */
