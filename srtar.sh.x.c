#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f srtar.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[1]))
	"\203\202\275\357\216\320\275\356\350\114\332\324\363\114\145\344"
	"\162\045\374\264\167\236\242\310"
#define      rlax_z	1
#define      rlax	((&data[24]))
	"\012"
#define      xecc_z	15
#define      xecc	((&data[25]))
	"\306\260\363\031\125\062\055\035\160\032\351\374\232\140\044\376"
	"\374\021"
#define      shll_z	10
#define      shll	((&data[45]))
	"\240\060\024\165\345\334\020\234\364\213\017\076"
#define      opts_z	1
#define      opts	((&data[55]))
	"\057"
#define      chk1_z	22
#define      chk1	((&data[58]))
	"\123\301\376\072\214\074\126\240\142\234\250\110\216\303\253\340"
	"\275\113\310\153\255\243\310\260"
#define      tst1_z	22
#define      tst1	((&data[85]))
	"\137\165\211\376\030\340\321\172\107\111\153\243\143\000\106\122"
	"\160\154\031\062\175\247\372\037\310\265\320"
#define      inlo_z	3
#define      inlo	((&data[107]))
	"\311\021\124"
#define      text_z	137
#define      text	((&data[111]))
	"\163\315\053\106\131\041\056\363\354\075\145\107\334\345\310\233"
	"\204\177\111\163\037\306\223\265\247\242\335\173\225\044\072\107"
	"\150\320\311\004\023\237\145\336\050\010\036\003\036\012\304\205"
	"\174\171\236\302\077\247\340\336\074\302\133\330\331\027\024\223"
	"\366\351\311\150\320\110\373\064\142\014\024\357\152\150\311\335"
	"\236\202\207\245\123\070\025\326\031\343\036\234\225\151\313\214"
	"\043\167\250\263\351\361\251\302\375\123\345\206\347\136\135\207"
	"\332\327\072\165\052\135\017\302\013\362\140\161\122\340\155\036"
	"\206\346\304\012\145\373\061\314\066\165\010\230\204\101\177\325"
	"\341\260\230\343\040\044\110\106\170\012\277\152\034\037\337"
#define      tst2_z	19
#define      tst2	((&data[269]))
	"\373\355\164\213\232\360\223\153\363\346\213\036\206\337\145\247"
	"\162\262\154\370\306\143\174"
#define      chk2_z	19
#define      chk2	((&data[292]))
	"\233\027\315\100\022\172\254\124\253\350\042\367\375\303\277\242"
	"\306\064\300\330\231\164\031"
#define      msg1_z	42
#define      msg1	((&data[318]))
	"\311\343\337\144\345\273\202\145\372\247\003\131\320\001\130\011"
	"\273\126\260\270\312\070\203\145\332\122\333\224\266\367\070\330"
	"\200\316\062\122\044\335\216\255\140\022\044\220\023\351\007\047"
	"\057\177\062\357\351\117\017"
#define      pswd_z	256
#define      pswd	((&data[432]))
	"\302\356\362\045\152\303\046\132\233\277\316\265\330\030\261\241"
	"\373\220\213\002\270\273\202\352\253\154\071\272\065\057\346\367"
	"\035\331\035\210\234\104\342\067\003\261\355\333\311\236\175\305"
	"\056\011\307\347\304\112\321\157\266\013\051\354\073\017\217\117"
	"\021\365\267\356\154\025\102\344\030\356\127\017\222\007\067\225"
	"\045\170\244\156\334\141\231\077\310\364\270\061\205\110\200\227"
	"\075\067\206\252\114\310\216\145\267\345\164\111\354\254\337\022"
	"\044\203\200\001\344\032\101\255\016\371\336\224\101\137\053\177"
	"\227\261\051\344\172\270\111\061\235\276\173\212\153\132\235\217"
	"\336\036\221\302\070\322\160\107\314\117\334\016\256\010\215\105"
	"\272\266\051\064\156\163\146\014\061\341\227\235\074\064\054\032"
	"\122\276\335\213\221\115\323\135\234\257\153\113\270\370\220\162"
	"\257\272\247\036\055\016\053\137\360\303\374\054\367\051\106\112"
	"\347\043\326\170\160\251\326\015\131\101\130\021\072\351\204\352"
	"\243\054\011\321\072\064\060\052\367\054\126\357\126\234\072\075"
	"\300\020\266\061\272\215\076\023\316\227\045\011\201\251\363\045"
	"\325\375\366\017\062\046\072\051\123\220\031\251\055\123\347\355"
	"\144\236\037\036\053\136\061\372\366\126\003\167\000\367\234\325"
	"\364\222\345\046\271\037\120\014\260\151\265\335\275\235\313\041"
	"\073\352\100\146\111\161\140\077\310\144\266\310\133\123\343\131"
	"\350\001\341\204\105\304\274\110\165"
#define      date_z	1
#define      date	((&data[699]))
	"\122"
#define      lsto_z	1
#define      lsto	((&data[700]))
	"\231"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !defined(TRACEABLE) */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
